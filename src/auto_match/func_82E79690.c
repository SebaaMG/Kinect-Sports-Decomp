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
extern int fn_82E78690();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82E79690(int param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint auStack_30 [12];
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82F68CC0(param_2,param_1 + 0x13c,0x3c);
    *(undefined2 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    if ((ulonglong)*(ushort *)(param_1 + 0x146) != 0) {
      lVar2 = fn_82E78690(param_1 + 0x178,(ulonglong)*(ushort *)(param_1 + 0x146) - 1,auStack_30);
      auStack_30[0] = -(uint)(lVar2 != 0) & auStack_30[0];
      if (auStack_30[0] == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2,0,0x4c);
      }
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(auStack_30[0] + 0x17);
      if (*(int *)(auStack_30[0] + 300) != 0) {
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(auStack_30[0] + 0x134);
        *(ushort *)(param_2 + 0x40) = *(byte *)(auStack_30[0] + 0x130) + 1;
        *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(auStack_30[0] + 0x13c);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

