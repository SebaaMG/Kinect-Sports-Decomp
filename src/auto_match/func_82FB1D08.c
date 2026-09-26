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
extern int fn_82FA8948();
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


undefined8 fn_82FB1D08(int *param_1,int param_2)

{
  int *piVar2;
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x160))
                            (param_1,0,*(undefined4 *)(param_2 + 8),param_2 + 0x10,aiStack_30);
  if (piVar2 == (int *)0x0) {
    uVar1 = 2;
  }
  else {
    (**(code **)(*piVar2 + 4))();
    uStack_28 = **(undefined4 **)(param_2 + 0xc);
    uStack_24 = (*(undefined4 **)(param_2 + 0xc))[1];
    if (*(int *)(aiStack_30[0] + 0x40) == 0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = *(undefined4 *)(*(int *)(aiStack_30[0] + 0x40) + 0x68);
    }
    uVar1 = fn_82FA8948(piVar2,&uStack_28,0);
  }
  return uVar1;
}

