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
extern int fn_82230040();
extern int fn_822AC640();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_24;


undefined4 * fn_8243DDB8(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  puVar5 = puVar2 + 3;
  *puVar2 = *(undefined4 *)(param_2 + 4);
  puVar2[1] = *(undefined4 *)(param_2 + 4);
  puVar2[2] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_3;
    puVar2[4] = param_3[1];
  }
  puVar2 = *(undefined4 **)(param_2 + 4);
  iVar3 = 1;
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      pbVar4 = (byte *)puVar2[3];
      pbVar6 = (byte *)*puVar5;
      do {
        iVar3 = (uint)*pbVar6 - (uint)*pbVar4;
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar3 == 0);
      iVar3 = -(iVar3 >> 0x1f);
      if (iVar3 == 0) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  puVar2 = (undefined4 *)fn_822AC640(auStack_30,param_2,iVar3,puVar2);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

