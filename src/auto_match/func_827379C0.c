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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697700();
extern int fn_827558B0();
extern int fn_82755AE0();


void fn_827379C0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar6;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar7;
  ulonglong uVar8;
  
  cVar6 = fn_82695468(param_1,0x29);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar8 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar8 = 0;
    }
    if (((uVar8 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar4 = fn_82697700(uVar3,uVar1);
      if (*(int *)(param_1 + 0x1c) < 2) {
        uVar5 = fn_827558B0(uVar8 + 0x30);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar5 = fn_82697700(uVar3,uVar1);
      }
      if ((uVar5 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
        uVar5 = uVar4 + 1;
      }
      uVar7 = fn_82755AE0(uVar8 + 0x30,uVar4,uVar5);
      puVar2 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar2);
      puVar2[4] = uVar7;
      *puVar2 = 2;
    }
  }
  return;
}

