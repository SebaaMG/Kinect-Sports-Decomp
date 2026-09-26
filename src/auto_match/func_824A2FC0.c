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
extern unsigned int *auStack_2c;
extern int fn_824A3050();
extern int fn_8260D428();
extern unsigned int uStack_30;


uint * fn_824A2FC0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uStack_30;
  uint auStack_2c [11];
  
  uStack_30 = fn_824A3050(param_2,param_3);
  if (uStack_30 != *(uint *)(param_2 + 4)) {
    puVar2 = (undefined4 *)(uStack_30 + 0xc);
    if (0xf < *(uint *)(uStack_30 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    iVar1 = fn_8260D428(param_3,0,*(undefined4 *)(param_3 + 0x10),puVar2,
                         *(undefined4 *)(uStack_30 + 0x1c));
    if (-1 < iVar1) {
      puVar3 = &uStack_30;
      goto LAB_824a303c;
    }
  }
  puVar3 = auStack_2c;
  auStack_2c[0] = *(uint *)(param_2 + 4);
LAB_824a303c:
  *param_1 = *puVar3;
  return param_1;
}

