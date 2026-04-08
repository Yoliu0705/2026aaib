//week07-1 長方的程式設計 黑白棋
//File-Preference 調大字型

size(600,600); //視窗大小 600-20 X600-20
background(245,246,142); //淡綠色

for (int i=0; i<10; i++){ //左手i(直y方向)
  for (int j=0; j<10; j++){ //右手j(橫x方向)

    int x=10+j*60, y=10+i*60;

    fill(245,216,142); //淡橘色
    strokeWeight(2); //邊框線寬度2
    rect(x,y,60,60); //每個格子 60X60

  }
}
