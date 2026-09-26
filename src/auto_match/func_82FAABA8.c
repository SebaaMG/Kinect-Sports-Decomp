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
extern unsigned int *auStack_50;
extern int fn_82FAA780();
extern int fn_82FAD0A8();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


undefined8 fn_82FAABA8(int param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  uint uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_48 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if ((uStack_48 != 0) && (piStack_44 = (int *)fn_82FAD0A8(), piStack_44 != (int *)0x0)) {
    uVar1 = param_3 & 0xffffffff;
    while (uVar1 != 0) {
      piStack_44 = (int *)(**(code **)(*piStack_44 + 0xc))
                                    (piStack_44,*(undefined4 *)(param_1 + 8),&uStack_48,auStack_50);
      param_3 = param_3 - 1;
      uVar1 = param_3;
    }
    uStack_3c = 1;
    uStack_40 = param_4;
    uStack_38 = param_2;
    uVar2 = fn_82FAA780(piStack_44,&uStack_40);
    return uVar2;
  }
  return 2;
}

