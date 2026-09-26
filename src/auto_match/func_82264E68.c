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
extern unsigned int *auStack_30;
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82526C70();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CCA8();


void fn_82264E68(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_30 [48];
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x60,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x60), cVar3 != '\0')) {
      fn_82526C70(auStack_30,10,0xffffffff821a6800,*param_1);
      fn_82E1CB08(0xffffffff821a7844,auStack_30,0);
      fn_82E1CB08(0xffffffff821a784c,param_2,0);
      fn_82E1CB08(0xffffffff821a7858,param_3,0);
      fn_82E1CCA8();
    }
  }
  return;
}

