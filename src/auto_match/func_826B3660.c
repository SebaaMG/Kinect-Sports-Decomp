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
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_82695DA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826B32D0();


undefined1 * fn_826B3660(undefined1 *param_1,int param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  cVar1 = *param_3;
  if (cVar1 == '\x02') {
    iVar5 = 5;
  }
  else if (cVar1 == '\x05') {
    iVar5 = 3;
  }
  else {
    if ((cVar1 == '\x03') || (bVar2 = false, cVar1 == '\x04')) {
      bVar2 = true;
    }
    if (!bVar2) {
      *param_1 = 0;
      return param_1;
    }
    iVar5 = 4;
  }
  puVar6 = (uint *)(param_2 + 8);
  uVar4 = *(int *)(param_2 + 8) + 0x10;
  *(uint *)(param_2 + 8) = uVar4;
  if (*(uint *)(param_2 + 0x10) <= uVar4) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695DA0(*puVar6,param_3);
  }
  uVar3 = fn_826B32D0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x2a0),
                        (iVar5 + 2) * 4 + *(int *)(param_2 + 0x78),1,
                        (longlong)((int)(*puVar6 - *(int *)(param_2 + 0xc)) >> 4) +
                        ((ulonglong)*(uint *)(param_2 + 0x1c) & 0x7ffffff) * 0x20 + -0x20);
  fn_82696330(*puVar6);
  uVar4 = *puVar6;
  *puVar6 = uVar4 - 0x10;
  if (uVar4 - 0x10 < *(uint *)(param_2 + 0xc)) {
    fn_826827F8(puVar6);
  }
  fn_826961B0(param_1,uVar3);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return param_1;
}

