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
extern unsigned int *auStack_6c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;


longlong fn_82E5E6C0(int *param_1)

{
  int iVar2;
  longlong lVar1;
  longlong lVar3;
  ushort uVar4;
  ushort uStack_70;
  ushort uStack_6e;
  undefined4 auStack_6c [3];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (param_1 != (int *)0x0) {
    uStack_70 = 0;
    lVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x98))(param_1,&uStack_70);
    if (-1 < iVar2) {
      uVar4 = 0;
      if (uStack_70 == 0) {
        return 0;
      }
      while( true ) {
        uStack_6e = 0;
        auStack_6c[0] = 0;
        uStack_60 = lbl_8202E618;
        uStack_5c = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        lVar1 = (**(code **)(*param_1 + 0x9c))(param_1,uVar4,&uStack_60,&uStack_6e,0,auStack_6c);
        if ((int)(-(uint)(lVar1 != -0x3ff2c94f) & (uint)lVar1) < 0) break;
        if ((ulonglong)uStack_6e == 0xffff) {
          return 0xff;
        }
        lVar3 = (ulonglong)uStack_6e + lVar3;
        uVar4 = uVar4 + 1;
        if (uStack_70 <= uVar4) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}

