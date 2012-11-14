
Drupal.behaviors.iframeFit = function () {
  var $frame = $(".field-field-web-feature-url iframe");

  // On Resize: resize iframe
  $(window).resize(function() {
    var windowHeight;
    var usedHeight;
    var frameHeight;

    // Get and calculate new heights
    usedHeight = $('#navigation').height() + $('#global').height();
    windowHeight = $(window).height();
    frameHeight = windowHeight - usedHeight;

    // Set the frame height
    $frame.attr('height', frameHeight);

  });

  // On initial load, trigger a resize behavior
  $(window).trigger('resize');
}
