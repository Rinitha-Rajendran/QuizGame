#include <iostream>
#include <map>
#include <algorithm> // Include the algorithm header for transform function
#include <cctype>    // Include the cctype header for tolower function

using namespace std;

// Function to convert a string to lowercase
string toLowercase(const string& str) {
    string lowerStr = str;
    for (char& c : lowerStr) {
        c = tolower(c);
    }
    return lowerStr;
}

int main() {
    // Map to store questions and answers
    map<string, string> questions {
        {"What language is primarily used for web development?\na) JavaScript\nb) Java\nc) C++\nd) Python", "a"},
        {"Which language is known for its simplicity and readability?\na) C\nb) Ruby\nc) Java\nd) Python", "d"},
        {"Which language is often used for game development and graphics programming?\na) Java\nb) C#\nc) C++\nd) Swift", "c"},
        {"What language is commonly used for system programming and is known for its speed and performance?\na) Python\nb) Java\nc) C\nd) JavaScript", "c"},
        {"Which language is used for developing mobile applications in Android?\na) Swift\nb) Objective-C\nc) Java\nd) Kotlin", "c"},
        {"What language is known for its use in data science, machine learning, and artificial intelligence?\na) Python\nb) Java\nc) R\nd) C++", "a"},
        {"Which language is often used for scripting, automation, and web development?\na) PHP\nb) Perl\nc) Python\nd) C++", "c"},
        {"What language is used for developing iOS applications?\na) Swift\nb) Objective-C\nc) Java\nd) Kotlin", "a"},
        {"Which language is known for its use in web development, especially on the server side?\na) HTML\nb) CSS\nc) JavaScript\nd) PHP", "d"},
        {"What language is known for its use in statistical computing and graphics?\na) Python\nb) R\nc) Java\nd) C++", "b"},
        {"Which language is often used for data analysis, scripting, and automation?\na) Java\nb) Python\nc) C++\nd) Ruby", "b"},
        {"Which language is known for its use in developing native desktop applications?\na) Java\nb) Python\nc) C++\nd) JavaScript", "c"},
        {"What language is often used for backend development in web applications?\na) HTML\nb) CSS\nc) JavaScript\nd) Ruby", "d"},
        {"Which language is commonly used for mathematical computations and numerical analysis?\na) Python\nb) Java\nc) MATLAB\nd) C++", "c"},
        {"Which language is known for its use in building scalable and high-performance systems?\na) Python\nb) Java\nc) C\nd) JavaScript", "b"},
        {"What language is used for developing cross-platform mobile applications?\na) Swift\nb) Objective-C\nc) Java\nd) Flutter", "d"},
        {"Which language is commonly used for creating dynamic and interactive web pages?\na) HTML\nb) CSS\nc) JavaScript\nd) PHP", "c"},
        {"What language is known for its use in game development and virtual reality?\na) Python\nb) C++\nc) Java\nd) Ruby", "b"},
        {"Which language is often used for writing shell scripts and system administration?\na) Python\nb) Bash\nc) C++\nd) Java", "b"},
        {"What language is commonly used for building machine learning models?\na) Java\nb) Python\nc) C++\nd) MATLAB", "b"},
        {"Which language is known for its use in embedded systems and IoT?\na) Python\nb) C++\nc) Java\nd) Ruby", "b"},
        {"What language is used for developing serverless applications and cloud computing?\na) Python\nb) JavaScript\nc) Java\nd) Swift", "b"},
        {"Which language is often used for scripting and automation in Windows environments?\na) Python\nb) PowerShell\nc) C++\nd) Java", "b"},
        {"What language is known for its use in natural language processing and text mining?\na) C++\nb) Python\nc) Java\nd) R", "b"},
        {"Which language is often used for building interactive and dynamic user interfaces?\na) JavaScript\nb) Python\nc) C++\nd) Ruby", "a"},
        {"What language is commonly used for developing scientific and engineering applications?\na) C++\nb) Java\nc) MATLAB\nd) Python", "d"},
        {"Which language is known for its use in developing blockchain applications?\na) Java\nb) Python\nc) Solidity\nd) C++", "c"},
        {"What language is commonly used for developing web servers?\na) Python\nb) JavaScript\nc) Java\nd) C++", "d"},
        {"Which language is often used for creating desktop GUI applications?\na) HTML\nb) CSS\nc) C++\nd) JavaScript", "c"},
        {"What language is known for its use in developing games and interactive media?\na) Java\nb) C#\nc) C++\nd) Python", "c"}
    };

    int score = 0;
    int totalQuestions = questions.size(); // Total number of questions

    // Iterate through each question
    for (const auto& [question, correctAnswer] : questions) {
        cout << question << endl;

        string userAnswer;
        cout << "Your answer: ";
        cin >> userAnswer;

        // Convert both user's answer and correct answer to lowercase for case-insensitive comparison
        string lowerUserAnswer = toLowercase(userAnswer);
        string lowerCorrectAnswer = toLowercase(correctAnswer);

        if (lowerUserAnswer == lowerCorrectAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect. The correct answer is: " << correctAnswer << endl;
        }
        cout << endl;
    }

    cout << "Quiz complete! Your score: " << score << "/" << totalQuestions << endl;

    // Print congratulations if the score equals the total number of questions
    if (score == totalQuestions) {
        cout << "CONGRATULATIONS!" << endl;
    }
    // Print better luck next time if the score is less than half of the total questions
    else if (score < totalQuestions / 2) {
        cout << "Better luck next time!" << endl;
    }

    return 0;
}
