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
extern int fn_82681898();
extern int fn_82693A98();
extern int fn_82693B78();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();


void fn_82710378(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar6;
  undefined8 uVar4;
  int iVar5;
  longlong lVar7;
  bool bVar8;
  undefined4 *apuStack_40 [2];
  longlong lStack_38;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  lVar7 = 0;
  *puVar1 = 0;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x2a4) == '\x01') {
    cVar6 = fn_82695468(param_1,8);
    if (cVar6 == '\0') {
      fn_826954C0(param_1,0xffffffff82005ea4,0,0);
    }
    else {
      if ((ulonglong)*(uint *)(param_1 + 8) != 0) {
        lVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_40,uVar4,uVar2,0xffffffffffffffff,0);
        bVar8 = true;
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar4 = fn_826957D0(param_1,1);
          cVar6 = fn_82695608(uVar4,uVar2);
          bVar8 = cVar6 == '\0';
        }
        uVar2 = *apuStack_40[0];
        uVar4 = fn_82693A98(apuStack_40);
        iVar5 = fn_82693B78(lVar7 + 0x30,uVar2,uVar4,bVar8);
        lStack_38 = (longlong)iVar5;
        fn_82681898((double)lStack_38,*(undefined4 *)(param_1 + 4));
        uVar3 = apuStack_40[0][2];
        apuStack_40[0][2] = (int)((ulonglong)uVar3 - 1);
        if ((ulonglong)uVar3 - 1 == 0) {
          fn_826944C8(apuStack_40[0]);
        }
      }
    }
  }
  return;
}

