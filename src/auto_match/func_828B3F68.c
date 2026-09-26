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
extern int fn_8265CA20();
extern int fn_828B3758();
extern int fn_828CCA70();


undefined4 * fn_828B3F68(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *apuStack_50 [20];
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0x19) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar1;
      if (param_4 == '\0') {
        bVar4 = *(ulonglong *)(param_3 + 0x10) < *(ulonglong *)(puVar3 + 4);
      }
      else {
        bVar4 = *(ulonglong *)(param_3 + 0x10) <= *(ulonglong *)(puVar3 + 4);
      }
      if (bVar4 == false) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  apuStack_50[0] = puVar3;
  if (bVar4 != false) {
    if (puVar3 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar3 = (undefined4 *)fn_828B3758(apuStack_50,param_2,1,puVar3,param_3);
      uVar2 = *puVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_828CCA70(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(ulonglong *)(apuStack_50[0] + 4) < *(ulonglong *)(param_3 + 0x10)) {
    puVar3 = (undefined4 *)fn_828B3758(apuStack_50,param_2,bVar4,puVar3,param_3);
    uVar2 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

