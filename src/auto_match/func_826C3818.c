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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826C2E50();


void fn_826C3818(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    pcVar6 = (char *)fn_826957D0(param_1,0);
    if ((*pcVar6 == '\b') || (bVar3 = false, *pcVar6 == '\v')) {
      bVar3 = true;
    }
    if ((bVar3) || (pcVar6 = (char *)fn_826957D0(param_1,0), *pcVar6 == '\v')) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      uVar4 = fn_82696958(uVar4,uVar2);
      fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar4);
    }
    else {
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 1;
    }
  }
  else {
    uVar5 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x34,0);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_826C2E50(uVar5,*(undefined4 *)(param_1 + 0x18));
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar5);
    if ((uVar5 & 0xffffffff) != 0) {
      fn_826824B0(uVar5);
    }
  }
  return;
}

