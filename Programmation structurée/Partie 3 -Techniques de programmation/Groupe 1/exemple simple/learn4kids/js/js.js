$("document").ready(function() {
  $("#learnNumbersDiv").hide();
  $("#learnAlphabitsDiv").hide();
  //learn numbers section
  $("#learnNumbersDiv .content button").click(function() {
    $("#learnNumbersDiv").hide();
  });
  $("#learnNumbers").click(function() {
    $("#learnNumbersDiv").show();
  });
  $("#learnNumbersDiv .box").each(function(index) {
    $(this).append('<img src="images/numbers/' + (index + 1) + '.png" alt="">');
  });
  $("#learnNumbersDiv .box").each(function(index) {
    $(this).click(function() {
      $(".ttt").text(numbers[index]);
      let audio = document.createElement("audio");
      audio.src = "audios/numbers/" + (index + 1) + ".mp3";
      audio.play();
    });
  });
  //learn alphabit section
  $("#learnAlphabitsDiv .content button").click(function() {
    $("#learnAlphabitsDiv").hide();
  });
  $("#learnAlphabits").click(function() {
    $("#learnAlphabitsDiv").show();
  });
  $("#learnAlphabitsDiv .box").each(function(index) {
    $(this).append(
      '<img src="images/alphabits/' + (index + 1) + '.png" alt="">'
    );
  });
  $("#learnAlphabitsDiv .box").each(function(index) {
    $(this).click(function() {
      let audio = document.createElement("audio");
      audio.src = "audios/alphabits/" + (index + 1) + ".mp3";
      audio.play();
    });
  });
});
let numbers = [
  "One",
  "Two",
  "Three",
  "Four",
  "Five",
  "Six",
  "Seven",
  "Eight",
  "Nine"
];
