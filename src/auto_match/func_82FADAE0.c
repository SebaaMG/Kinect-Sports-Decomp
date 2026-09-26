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
extern int fn_82FA96C8();
extern int fn_82FAD670();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_82FADAE0(int *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iStack0000001c;
  int aiStack_40 [16];
  
  aiStack_40[0] = param_1[1];
  uVar3 = 1;
  lVar2 = 0;
  uVar1 = 0;
  iStack0000001c = param_2;
  if (aiStack_40[0] == 0) {
LAB_82fadbf0:
    fn_82FAD670(param_1);
  }
  else {
    do {
      uVar1 = uVar1 + 1;
      lVar4 = (ulonglong)*(uint *)(aiStack_40[0] + 0xc) + lVar2;
      if ((((-1 < (int)lVar4) && ((int)lVar4 < iStack0000001c)) &&
          (*(char *)(aiStack_40[0] + 0x10) != '\0')) && (param_1[4] = aiStack_40[0], 0x40 >= uVar1))
      {
        (**(code **)(*param_1 + 4))(param_1,aiStack_40,0);
      }
      fn_82FA96C8(aiStack_40[0],lVar4,&stack0x0000001c,uVar3);
      if ((-1 < *(int *)(aiStack_40[0] + 0xc)) && (*(char *)(aiStack_40[0] + 0x10) != '\0')) {
        uVar3 = 0;
        lVar2 = lVar4;
      }
      if (0x40 < uVar1) {
        (**(code **)(*param_1 + 0x10))(param_1);
        goto LAB_82fadbf0;
      }
      aiStack_40[0] = *(int *)(aiStack_40[0] + 4);
    } while (aiStack_40[0] != 0);
    fn_82FAD670(param_1);
  }
  return;
}

