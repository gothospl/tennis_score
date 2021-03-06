#include "pch.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

string tennis_score(int score1, int score2) {

	int difference = score1 - score2;
	if (difference < -2) { difference = -2; }
	if (difference > 2) { difference = 2; }
	string result;
	string score_map[] = { "Love", "Fifteen", "Thirty", "Forty" };
	string score_map_lategame[] = { "Win for player2", "Advantage player2", "Deuce", "Advtantage player1", "Win for player1" };

	if (score1 <= 3 && score2 <= 3) {

		if (difference == 0) {
			if (score1 == 3) {
				result = score_map_lategame[difference + 2];
			}
			else {
				result = score_map[score1] + " all";
			}
		}
		else {
			result = score_map[score1] + "-" + score_map[score2];
		}
	}
	else {
		result = score_map_lategame[difference + 2];
	}
	return result;
}
