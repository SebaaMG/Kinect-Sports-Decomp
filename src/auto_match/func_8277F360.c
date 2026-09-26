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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8277E590();
extern int fn_8277F2F0();


longlong fn_8277F360(double param_1,int param_2,int *param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  
  if (((param_5 == '\0') && (param_3[7] == param_3[8])) && (param_3[9] == param_3[10])) {
    if ((param_3[0xb] & 8U) != 0) {
      uVar1 = *(uint *)*param_3;
      if ((double)*(float *)(*(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_2 + 0x3c)) +
                             (uVar1 & 0x3ff) * 8 + 4) == param_1) {
        lVar5 = (ulonglong)*(uint *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_2 + 0x3c)) +
                ((ulonglong)uVar1 & 0x3ff) * 8;
        goto LAB_8277f3e0;
      }
    }
    return -1;
  }
  puVar2 = (uint *)*param_3;
  iVar3 = *(int *)(param_2 + 0x3c);
  uVar1 = *puVar2;
  if (((double)*(float *)(*(int *)((uVar1 >> 8 & 0xfffffc) + iVar3) + (uVar1 & 0x3ff) * 8 + 4) ==
       param_1) ||
     (((param_3[0xb] & 2U) != 0 &&
      (uVar1 = puVar2[1],
      (double)*(float *)(*(int *)((uVar1 >> 8 & 0xfffffc) + iVar3) + (uVar1 & 0x3ff) * 8 + 4) ==
      param_1)))) {
    lVar5 = (ulonglong)*(uint *)((uVar1 >> 8 & 0xfffffc) + iVar3) + ((ulonglong)uVar1 & 0x3ff) * 8;
LAB_8277f3e0:
    lVar5 = fn_8277F2F0(param_2,lVar5);
    return lVar5;
  }
  pfVar6 = (float *)(*(int *)((*puVar2 >> 8 & 0xfffffc) + iVar3) + (*puVar2 & 0x3ff) * 8);
  fVar4 = (float)(param_1 - (double)pfVar6[1]) * (float)puVar2[2] + *pfVar6;
  if (param_1 <= (double)*(float *)(param_2 + 0x118)) {
    if (fVar4 - *(float *)(param_2 + 0x114) <= *(float *)(param_2 + 0xf0)) goto LAB_8277f4d4;
    *(ulonglong *)(param_2 + 0x114) = CONCAT44(fVar4,(float)param_1);
  }
  else {
    *(ulonglong *)(param_2 + 0x114) = CONCAT44(fVar4,(float)param_1);
  }
  fn_8277E590(param_2 + 0x104);
LAB_8277f4d4:
  return (ulonglong)*(uint *)(param_2 + 0x104) - 1;
}

