auto const welcome_page = R"(

<!DOCTYPE html>
<html>
    <head>
        <title>Simple Server</title>
        <style>
            html, body 
            {
                height: 100%;
                margin: 0;
                font-family: Arial, Helvetica, sans-serif;
            }

            .bg-image 
            {
                background-color: #253E66; 
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
                color: #EF6555;
                font-size: 60px;
                font-family: Verdana, sans-serif;
                font-weight: bold;
            }

            .bg-text-subheader
            {
                text-align: left;
                position: absolute;
                top: 48%;
                left: 5%;
                transform: translate(0%,50%);
                color: white;
                font-size: 45px;
                font-family: Verdana, sans-serif;
                font-weight: bold;
            }
            
            .bg-text-simple-server
            {
                text-align: left;
                position: absolute;
                top: 39.5%;
                left:35%;
                transform: translate(0%,50%);
                color:goldenrod;
                font-size: 70px;
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
            <div class="bg-text">WELCOME TO</div>
            <div class="bg-text-simple-server">SIMPLE-SERVER</div>
            <div class ="bg-text-subheader">Lorem ipsum dolor sit amet</div>
    </div>

    <div class ="sidenav">
        <a href="/about">About</a>
        <a href="/home">Home</a>
        <a href="/contact">Contact Us</a>
    </div>

</body>
</html>

)";