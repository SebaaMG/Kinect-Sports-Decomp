typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82486CA8();
extern int fn_82522FF0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_82486BC0(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  double dVar4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  dVar4 = (double)fn_82522FF0();
  dVar4 = (double)(float)(dVar4 - (double)(float)param_1[3]);
  fn_82486CA8(param_1[1],auStack_60);
  fn_82486CA8(param_2,auStack_40);
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x62,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x62), cVar3 != '\0')) {
      fn_82E1CB08(0xffffffff821a7864,auStack_60,0);
      fn_82E1CB08(0xffffffff821a7870,auStack_40,0);
      fn_82E1CC60(dVar4,0xffffffff821a6d44);
      fn_82E1CCA8();
    }
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}

