#include <stdio.h>
#include <raylib.h>
#include "interface.h"

static Rectangle buttonAC = {67.5f, 170, 155, 75};
static Rectangle buttonPlusMinus = {237.5f, 170, 155, 75};
static Rectangle buttonPercent = {407.5f, 170, 155, 75};
static Rectangle buttonDivide = {577.5f, 170, 155, 75};
static Rectangle button7 = {67.5f, 257, 155, 75};
static Rectangle button8 = {237.5f, 257, 155, 75};
static Rectangle button9 = {407.5f, 257, 155, 75};
static Rectangle buttonX = {577.5f, 257, 155, 75};
static Rectangle button4 = {67.5f, 344, 155, 75};
static Rectangle button5 = {237.5f, 344, 155, 75};
static Rectangle button6 = {407.5f, 344, 155, 75};
static Rectangle buttonMinus = {577.5f, 344, 155, 75};
static Rectangle button1 = {67.5f, 431, 155, 75};
static Rectangle button2 = {237.5f, 431, 155, 75};
static Rectangle button3 = {407.5f, 431, 155, 75};
static Rectangle buttonPlus = {577.5f, 431, 155, 75};
static Rectangle button0 = {67.5f, 518, 155, 75};
static Rectangle buttonDecimal = {237.5f, 518, 155, 75};
static Rectangle buttonDEL = {407.5f, 518, 155, 75};
static Rectangle buttonEquals = {577.5f, 518, 155, 75};

void HandleMouseInput(void) {
    Vector2 mousePosition = GetMousePosition();

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonAC)) {
            printf("AC\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonPlusMinus)) {
            printf("±\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonPercent)) {
            printf("%%\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonDivide)) {
            printf("÷\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button7)) {
            printf("7\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button8)) {
            printf("8\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button9)) {
            printf("9\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonX)) {
            printf("x\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button4)) {
            printf("4\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button5)) {
            printf("5\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button6)) {
            printf("6\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonMinus)) {
            printf("-\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button1)) {
            printf("1\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button2)) {
            printf("2\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button3)) {
            printf("3\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonPlus)) {
            printf("+\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, button0)) {
            printf("0\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonDecimal)) {
            printf(".\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonDEL)) {
            printf("DEL\n");
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePosition, buttonEquals)) {
            printf("=\n");
    }
}

void DrawCalculator(void) {
        Rectangle display = {67.5f, 70, 665, 75};
        DrawRectangleRec (display, DARKGRAY);
        DrawText("0", 680, 85, 50, WHITE);
        
        //AC, ±, %, ÷
        DrawRectangleRec (buttonAC, DARKGRAY);
        DrawText("AC", 125, 190, 30, WHITE); 

        DrawRectangleRec(buttonPlusMinus, DARKGRAY);
        DrawText("±", 305, 190, 30, WHITE); 

        DrawRectangleRec(buttonPercent, DARKGRAY);
        DrawText("%", 472.5, 190, 30, WHITE); 

        DrawRectangleRec(buttonDivide, GOLD);
        DrawText("÷", 640, 190, 40, WHITE); 
        
        //-------------------------------------------------
        // 7-9 & x
        DrawRectangleRec(button7, DARKGRAY);
        DrawText("7", 125, 277, 30, WHITE);

        DrawRectangleRec(button8, DARKGRAY);
        DrawText("8", 305, 277, 30, WHITE);

        DrawRectangleRec(button9, DARKGRAY);
        DrawText("9", 472.5, 277, 30, WHITE);

        DrawRectangleRec(buttonX, GOLD);
        DrawText("x", 640, 277, 40, WHITE);

        //-------------------------------------------------
        // 4-6 & -
        DrawRectangleRec(button4, DARKGRAY);
        DrawText("4", 125, 364, 30, WHITE);

        DrawRectangleRec(button5, DARKGRAY);
        DrawText("5", 305, 364, 30, WHITE);

        DrawRectangleRec(button6, DARKGRAY);
        DrawText("6", 472.5, 364, 30, WHITE);

        DrawRectangleRec(buttonMinus, GOLD);
        DrawText("-", 640, 364, 40, WHITE);

        //-------------------------------------------------
        // 1-3 & +
        DrawRectangleRec(button1, DARKGRAY);
        DrawText("1", 125, 451, 30, WHITE);

        DrawRectangleRec(button2, DARKGRAY);
        DrawText("2", 305, 451, 30, WHITE);

        DrawRectangleRec(button3, DARKGRAY);
        DrawText("3", 472.5, 451, 30, WHITE);

        DrawRectangleRec(buttonPlus, GOLD);
        DrawText("+", 640, 451, 40, WHITE);

        //-------------------------------------------------
        // 0, ".", DEL, =
        DrawRectangleRec(button0, DARKGRAY);
        DrawText("0", 125, 538, 30, WHITE);

        DrawRectangleRec(buttonDecimal, DARKGRAY);
        DrawText(".", 305, 538, 30, WHITE);

        DrawRectangleRec(buttonDEL, DARKGRAY);
        DrawText("DEL", 455, 538, 30, WHITE);

        DrawRectangleRec(buttonEquals, ORANGE);
        DrawText("=", 640, 538, 40, WHITE);
        
        //-------------------------------------------------

}