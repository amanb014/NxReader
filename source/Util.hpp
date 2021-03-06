#ifndef _NXREADER_UTILS
#define _NXREADER_UTILS

#include <vector>
#include <string>

enum WindowState { MENU, BOOK };
enum Orientation { LAND,
                   LAND_R,
                   PORT,
                   PORT_R};
class Util {
private:

public:
  Util(void);
	~Util(void);

  static int* WINDOW_W;
  static int* WINDOW_H;

  static const int FRAMES_PER_SECOND = 60;
  static const int FRAME_DELAY = 1000 / FRAMES_PER_SECOND;

  static int page;

  static Orientation orientation;
  static float getAngle();
  static void setOrientation(Orientation o);
  static Orientation getOrientation();

  static int getFullWidth();

};

int startingIndexForPage(int total, int page, int count);
int listFilesFromFolder(const char *path, std::vector<std::string> *list);

#endif
