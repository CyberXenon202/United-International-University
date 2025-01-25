<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Materials</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
    <!-- Navigation Bar -->
    <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
        <div class="container">
            <a class="navbar-brand" href="#">My Materials</a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navbarNav">
                <ul class="navbar-nav ms-auto">
                    <li class="nav-item"><a class="nav-link" href="#pdfs">PDFs</a></li>
                    <li class="nav-item"><a class="nav-link" href="#images">Images</a></li>
                    <li class="nav-item"><a class="nav-link" href="#others">Other Files</a></li>
                </ul>
            </div>
        </div>
    </nav>

    <!-- Main Content -->
    <div class="container my-5">
        <h1 class="text-center">Welcome to My Materials Website</h1>
        <p class="text-center">Browse and download my resources easily!</p>

        <!-- PDFs Section -->
        <section id="pdfs" class="my-5">
            <h2>PDFs</h2>
            <ul class="list-group">
                <li class="list-group-item">
                    <a href="docs/sample1.pdf" download>Sample PDF 1</a>
                </li>
                <li class="list-group-item">
                    <a href="docs/sample2.pdf" download>Sample PDF 2</a>
                </li>
            </ul>
        </section>

        <!-- Images Section -->
        <section id="images" class="my-5">
            <h2>Images</h2>
            <div class="row">
                <div class="col-md-4">
                    <img src="images/sample1.jpg" alt="Sample Image 1" class="img-fluid rounded mb-3">
                </div>
                <div class="col-md-4">
                    <img src="images/sample2.jpg" alt="Sample Image 2" class="img-fluid rounded mb-3">
                </div>
            </div>
        </section>

        <!-- Other Files Section -->
        <section id="others" class="my-5">
            <h2>Other Files</h2>
            <ul class="list-group">
                <li class="list-group-item">
                    <a href="files/sample1.zip" download>Sample ZIP File</a>
                </li>
                <li class="list-group-item">
                    <a href="files/sample2.docx" download>Sample Word Document</a>
                </li>
            </ul>
        </section>
    </div>

    <!-- Footer -->
    <footer class="bg-dark text-white text-center py-3">
        <p>&copy; 2025 Rakib Hossain. All Rights Reserved.</p>
    </footer>

    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>
