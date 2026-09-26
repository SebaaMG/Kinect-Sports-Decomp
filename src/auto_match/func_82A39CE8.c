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
extern int fn_82A39BB0();
extern int fn_82A3D230();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A39CE8(int param_1)

{
  ulonglong uVar1;
  uint uStack_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 0x972) = 0;
  fn_82A3D230(param_1,0,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                    &uStack_20,&uStack_1c);
  fn_82A39BB0(param_1,uStack_20,uStack_1c);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if (uStack_20 == *(uint *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x2000);
  }
  fn_82F63CA0(uVar1,(uStack_20 >> 3) + uVar1,
               ((ulonglong)(*(uint *)(param_1 + 0x1c) >> 3) - (ulonglong)(uStack_20 >> 3)) + 1);
  uVar1 = ((ulonglong)*(uint *)(param_1 + 0x1c) - (ulonglong)uStack_20 & 0xffffffff) >> 3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1 + *(uint *)(param_1 + 0x2c) + 1,0,0x1fff - uVar1);
}

