/*
 * Copyright (C) 2014-2016 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus Quest Editor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus Quest Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUSEDITOR_SOUND_H
#define SOLARUSEDITOR_SOUND_H

class QString;

namespace SolarusEditor {

class Quest;

namespace Sound {

void play_sound(const Quest& quest, const QString& sound_id);
void play_music(Quest& quest, const QString& music_id);
bool is_playing_music(const Quest& quest, const QString& music_id);
void stop_music(Quest& quest);

}

}

#endif