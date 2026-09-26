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
extern int fn_82E7EC68();
extern int fn_82E7F3F8();
extern int fn_82E7F8F0();
extern int fn_82E804C0();
extern unsigned int uStack_38;
extern unsigned int uStack_50;


undefined8 fn_82E80530(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uStack_50;
  int aiStack_4c [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uStack_50 = 0;
  aiStack_4c[0] = 0;
  uVar4 = 0;
  uStack_38 = 0;
  if (((uVar1 & 0x1000) == 0) && (uVar1 != 0)) {
    uVar3 = 0xffffffffc00d36ec;
  }
  else if (param_2 == (ushort *)0x0) {
    uVar3 = 0xffffffff80004003;
  }
  else if (((param_1 == param_2) || (*param_2 == 0)) ||
          ((uVar1 != 0 && (((uVar1 & 0xfff) != 0xc && ((*param_2 & 0xfff) != (uVar1 & 0xfff))))))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar3 = fn_82E7EC68(param_1,&uStack_50);
    uVar2 = uStack_50;
    if (-1 < (int)uVar3) {
      if (uStack_50 != 0) {
        do {
          uStack_38 = 0;
          uVar3 = fn_82E7F8F0(param_1,uVar4,auStack_40);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          uVar3 = fn_82E7F3F8(param_2,auStack_40,aiStack_4c);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        } while ((aiStack_4c[0] == 0) &&
                (uVar4 = uVar4 + 1, (uVar4 & 0xffffffff) < (ulonglong)uVar2));
        if ((uVar4 & 0xffffffff) < (ulonglong)uVar2) {
          return uVar3;
        }
      }
      uVar3 = fn_82E804C0(param_1,param_2);
    }
  }
  return uVar3;
}

