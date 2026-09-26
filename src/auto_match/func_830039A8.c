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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_83002E80();
extern int fn_83027128();
extern unsigned int lbl_831BC768;


void fn_830039A8(int param_1,uint *param_2,undefined8 param_3,char param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    do {
      iVar3 = param_1;
      if (*(int *)(iVar3 + 100) != 0) {
        if (*param_2 == 0) {
          iVar1 = fn_82FA5060(lbl_831BC768,0x50);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = fn_83027128();
          }
          *param_2 = uVar2;
          if (uVar2 == 0) goto LAB_83003a40;
        }
        if (param_4 == '\0') {
          fn_82F68CC0((ulonglong)*param_2 + 4,(ulonglong)*(uint *)(iVar3 + 100) + 4,0x4c);
        }
      }
LAB_83003a40:;} while (((*(int *)(iVar3 + 100) == 0) && ((*(byte *)(iVar3 + 0x3d) & 1) == 0)) &&
            (param_1 = *(int *)(iVar3 + 0x10), *(int *)(iVar3 + 0x10) != 0));
    fn_83002E80(iVar3,param_3,param_5);
  }
  return;
}

