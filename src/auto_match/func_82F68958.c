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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern unsigned int uStack_31;


uint fn_82F68958(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 uStack_31;
  byte abStack_30 [48];
  
  if (((param_3 == (int *)0x0) || (param_2 == 0)) || ((param_1 == (byte *)0x0 && (*param_3 == 0))))
  {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar3 = 0;
  }
  else {
    puVar5 = &uStack_31;
    lVar6 = 0x20;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    pbVar4 = (byte *)(param_2 + -1);
    do {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
      abStack_30[bVar1 >> 3] = (byte)(1 << (bVar1 & 7)) | abStack_30[bVar1 >> 3];
    } while (bVar1 != 0);
    if (param_1 == (byte *)0x0) {
      param_1 = (byte *)*param_3;
    }
    bVar1 = *param_1;
    while (((1 << (bVar1 & 7) & (uint)abStack_30[bVar1 >> 3]) != 0 && (bVar1 != 0))) {
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    }
    bVar1 = *param_1;
    pbVar4 = param_1;
    while (bVar1 != 0) {
      if ((1 << (*pbVar4 & 7) & (uint)abStack_30[*pbVar4 >> 3]) != 0) {
        *pbVar4 = 0;
        pbVar4 = pbVar4 + 1;
        break;
      }
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    *param_3 = (int)pbVar4;
    uVar3 = -(uint)(pbVar4 != param_1) & (uint)param_1;
  }
  return uVar3;
}

