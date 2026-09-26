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
extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern int fn_82975B00();


uint fn_82940360(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1[0x57] == 0) {
    uVar2 = fn_8295D0A8(param_1,0x200001f);
    if (-1 < (int)uVar2) {
      iVar1 = *(int *)(param_2 + 0x3c);
      if (iVar1 == 0x200000) {
        uVar3 = 0xffffffff90000000;
      }
      else if (iVar1 == 0x400000) {
        uVar3 = 0xffffffffa0000000;
      }
      else {
        if (iVar1 != 0x800000) {
          fn_82975B00(param_1,0,0x12ce,0xffffffff820343a0);
          return 0x80004005;
        }
        uVar3 = 0xffffffff98000000;
      }
      uVar2 = fn_8295A330(param_1,uVar3);
      if ((-1 < (int)uVar2) &&
         (uVar2 = (**(code **)(*param_1 + 0x138))
                            (param_1,*(uint *)(param_2 + 0xc) & 0x7ff | 0xa0000800,0xf0000,0),
         -1 < (int)uVar2)) {
        uVar2 = fn_829548C8(param_1);
        uVar2 = (int)uVar2 >> 0x1f & uVar2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

