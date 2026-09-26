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
extern int fn_82696958();
extern int fn_82743C08();
extern int fn_82743CD8();


void fn_82743DA8(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong lVar4;
  undefined1 uVar8;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    iVar5 = fn_82696958(uVar3,uVar1);
    if ((iVar5 != 0) &&
       (iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10), iVar6 == 0x10)) {
      cVar7 = fn_82695468(param_1,0x10);
      if (cVar7 == '\0') {
        fn_826954C0(param_1,0xffffffff8200ef00,0,0);
        return;
      }
      lVar4 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
      if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
        lVar4 = 0;
      }
      fn_82743CD8(lVar4,*(undefined4 *)(param_1 + 0x18),&dStack_40);
      fn_82743C08(*(undefined4 *)(param_1 + 0x18),iVar5,&dStack_30);
      if ((dStack_40 != dStack_30) || (uVar8 = 1, dStack_38 != dStack_28)) {
        uVar8 = 0;
      }
    }
  }
  puVar2 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar2);
  puVar2[4] = uVar8;
  *puVar2 = 2;
  return;
}

