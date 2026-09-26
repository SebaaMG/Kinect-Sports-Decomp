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
extern int fn_82C3E718();
extern int fn_82C3F390();


undefined8 fn_82C2BB50(int param_1,int param_2)

{
  undefined8 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 auStack_50 [20];
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar3 = 0;
    do {
      auStack_50[0] = 0;
      iVar4 = iVar3 * 0x6f0 + param_2;
      uVar5 = 0;
      *(undefined2 *)(iVar4 + 0xb6) = 4;
      do {
        iVar6 = uVar5 * 0x38 + iVar4 + 200;
        uVar1 = fn_82C3E718(iVar6,0x100,0,auStack_50,0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_82C3F390(param_1,iVar6);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar5 = uVar5 + 1 & 0xffff;
      } while (uVar5 < 4);
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while ((int)sVar2 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  return uVar1;
}

