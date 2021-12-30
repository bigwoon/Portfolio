const COLOR_ARRAY = [Black, Aqua, Coral, Aquamarine, Cadetblue, Cyan, Azure, Blue];

function runGAME() {

    let guess = '';
    let correct = false;
    let numtries = 0;
    
    
    const targetIndex = Math.floor(Math.random() * COLORS_ARRAY.length);
    const target = COLOR_ARRAY[targetIndex];
    console.log(target);

          


    do{
        guess = prompt('I am thinking of one of these colors:\n\n' + COLORS_ARRAY +'What color am I thinking of?\n');
        numTries += 1;
        if(guess === null){
        alert('Have a great day!');
    
          correct = checkGuess (guess, target);
        }

    

        } while(!correct);
         alert("Congrats! You got it"+ target + " \n\nIt took you" + numtries + "tries to guess correctly"); 
         document.body.style.background = guess;

         alert(`${target} ${numtries}`);
         return;

        
    


    
        

   
    function checkGuess(guess,target){
        let correct = false;
        console.log (guess);
        if (!COLORS_ARRAY.includes(guess)){
            alert('You have not entered a color from the list\n\nPlease choose a color from the before mentioned list.');
        }else if (guess > target) {
            alert('Your choice is alphabetically higher than the color.');
        }else if (guess < target) {
            alert('Your choice is alphabetically lower than the color.');
        }else {
        correct= true;
        }
        return correct;
        
    }
}
