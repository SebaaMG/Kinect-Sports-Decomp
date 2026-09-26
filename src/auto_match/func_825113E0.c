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
extern int fn_82230040();
extern int fn_82519388();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;


void fn_825113E0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *apuStack_40 [2];
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar1 + 0x15) == '\0') {
    if ((uint)puVar1[3] < param_2) {
      puVar1 = (undefined4 *)puVar1[2];
    }
    else {
      puVar2 = puVar1;
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  if ((puVar2 == *(undefined4 **)(param_1 + 4)) || (param_2 < (uint)puVar2[3])) {
    puVar1 = (undefined4 *)fn_8265C9E0(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      uStack_34 = 0;
      ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_38);
    }
    *puVar1 = *(undefined4 *)(param_1 + 4);
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    if (puVar1 + 3 != (uint *)0x0) {
      puVar1[3] = param_2;
      puVar1[4] = 0;
    }
    fn_82519388(apuStack_40,param_1,puVar2);
    puVar2 = apuStack_40[0];
  }
  puVar2[4] = param_3;
  return;
}

