$(document).ready(function () {
    $(document)
        .mousemove(function (e) {
            $('.cursor')
                .eq(0)
                .css({
                    left: e.clientX,
                    top: e.clientY
                });
            setTimeout(function () {
                $('.cursor')
                    .eq(1)
                    .css({
                        left: e.clientX,
                        top: e.clientY
                    });
            }, 100); setTimeout(function () {
                $('.cursor')
                    .eq(2)
                    .css({
                        left: e.clientX,
                        top: e.clientY
                    });
            }, 200); setTimeout(function () {
                $('.cursor')
                    .eq(3)
                    .css({
                        left: e.clientX,
                        top: e.clientY
                    });
            }, 300);

        })
})

