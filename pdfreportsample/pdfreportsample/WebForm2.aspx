<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="WebForm2.aspx.vb" Inherits="pdfreportsample.WebForm2" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <script src="https://code.jquery.com/jquery-3.6.0.min.js" integrity="sha256-/xUj+3OJU5yExlq6GSYGSHk7tPXikynS7ogEvDej/m4=" crossorigin="anonymous"></script>
    <title>Sample PDF Report Page</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <button type="button" class="pdf-report">PDF Report</button>
        </div>
    </form>
</body>
<script type="text/javascript">
    $(document).on("click", ".pdf-report", function () {
        $.ajax({
            url: "WebService/ReportService.asmx/PDFReportGenerate",
            data: '{}',
            contentType: "application/json; charset=utf-8",
            dataType: "json",
            type: "POST",
            success: function (response) {
                if (response.d.length > 0) {
                    window.open(response.d[0].pdfReportPath);
                }
            },
            error: function (response) {
                alert(response.responseText);
            }
        });
    });

</script>
</html>

