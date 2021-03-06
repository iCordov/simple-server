#ifndef ABOUT_PAGE_H_
#define ABOUT_PAGE_H_
auto const about_page = R"(

<!DOCTYPE html>
<html>
    <head>
        <title>About</title>
        <style>
            html, body 
            {
                height: 100%;
                margin: 0;
            }

            .bg-image 
            {
                background-color: #EF6555; 
                -webkit-background-size: cover;
                -moz-background-size: cover;
                -o-background-size: cover;
                background-size: cover;
                height: 100%;
            }

            .bg-text {
                text-align: left;
                position: absolute;
                top: 40.5%;
                left: 4%;
                transform: translate(0%,50%);
                color: #253E66;
                font-size: 60px;
                font-family: Verdana, sans-serif;
                font-weight: bold;
            }

            .sidenav 
            {
                height: 100%;
                width: 55px;
                position: fixed;
                z-index: 1;
                top: 0;
                right: 0;
                background-color: black;
                overflow-x: hidden;
                padding-top: 16.5%;
                
            }

            .sidenav a 
            {
                padding: 100px 0px 100px 18px;
                text-decoration:none;
                font-size: 18px;
                color:white;
                display: block;
                transform: rotate(90deg);
                font-family: Verdana, sans-serif;
            }

            .sidenav a:hover 
            {
                text-decoration: overline;
                 color:goldenrod;
            }

        </style>
    </head>

    <body>
    <div class="bg-image">
            <div class="bg-text">ABOUT</div>
    </div>

    <div class ="sidenav">
        <a href="/about">About</a>
        <a href="/home">Home</a>
        <a href="/product">Products</a>
    </div>

</body>
</html>

)";

#endif // ABOUT_PAGE_H_