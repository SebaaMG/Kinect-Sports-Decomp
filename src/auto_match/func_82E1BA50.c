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
extern int fn_82CEB3C8();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D00450();
extern int fn_82E174C8();
extern int fn_82E1ACB8();
extern int fn_82E1B6F8();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82E1BA50(int *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auStack_30 [24];
  
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  if (((uVar1 & 0xffffffff) == 0) && (param_1[7] != 0)) {
    uVar2 = fn_82D00450(param_1 + 0xb,param_2,param_2);
    uVar1 = fn_82E174C8(param_1,uVar2);
    if ((uVar1 & 0xffffffff) != 0) {
      puVar3 = (uint *)fn_82CEB3C8();
      if ((*puVar3 & 1) == 0) {
        fn_82D00388(auStack_30,(byte)*puVar3 & 1);
        fn_82E1B6F8(param_1 + 8,uVar1,param_1,param_1 + 0xf,auStack_30);
        fn_82E1ACB8(auStack_30);
        (**(code **)(*param_1 + 0x28))(param_1,auStack_30);
        fn_82D003F0(auStack_30);
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

