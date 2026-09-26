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
extern int fn_82381BC0();
extern int fn_82822510();
extern int fn_828297A0();
extern int fn_828298A0();


void fn_8282A380(undefined8 param_1,longlong param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *apuStack_30 [12];
  
  fn_828298A0(param_1,param_2,param_4);
  if (*param_4 == 0) {
    if (*(int *)(*(int *)(param_3 + 0x4c) + 8) == 0) {
      fn_82822510(param_2 + 0x2fc,0xffffffff828297a0,param_1,param_4);
    }
    else {
      puVar1 = *(undefined4 **)(*(int *)(param_3 + 0x4c) + 4);
      apuStack_30[0] = (undefined4 *)*puVar1;
      while (puVar2 = apuStack_30[0], apuStack_30[0] != puVar1) {
        iVar3 = fn_828297A0(apuStack_30[0][3],param_1);
        if (iVar3 != 0) {
          *param_4 = puVar2[3];
          return;
        }
        fn_82381BC0(apuStack_30);
      }
    }
  }
  return;
}

