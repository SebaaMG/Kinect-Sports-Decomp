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
extern unsigned int *auStack_3c;
extern int fn_82BD4DA8();
extern int fn_82BD62B0();
extern int fn_82BD6D20();
extern int fn_82BD9FD8();
extern unsigned int uStack_40;


bool fn_82BD5520(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uStack_40;
  undefined1 auStack_3c [60];
  
  iVar3 = 0;
  bVar1 = false;
  RtlEnterCriticalSection(param_1 + 0xf0);
  if (*(int *)(param_1 + 0x10c) == 3) goto LAB_82bd5648;
  iVar3 = XNotifyGetNext(*(undefined4 *)(param_1 + 0x118),0,&uStack_40,auStack_3c);
  if (iVar3 != 0) {
    bVar2 = false;
    if (uStack_40 != 10) {
      if (uStack_40 == 0xe) {
        bVar2 = true;
      }
      else if ((uStack_40 < 0x4000002) || (0x4000003 < uStack_40)) goto LAB_82bd55b0;
    }
    bVar1 = bVar2;
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
LAB_82bd55b0:
  iVar3 = fn_82BD4DA8(param_1);
  puVar7 = (undefined4 *)(param_1 + 0x4c);
  lVar5 = 4;
  do {
    if ((bVar1) && (iVar4 = fn_82BD62B0(puVar7[1]), iVar4 != 0)) {
      *(uint *)(puVar7[1] + 0xd0) = *(uint *)(puVar7[1] + 0xd0) | 8;
    }
    puVar7 = puVar7 + 1;
    fn_82BD6D20(*puVar7);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar8 = (int *)(param_1 + 0x60);
    do {
      if (((longlong *)*piVar8 != (longlong *)0x0) && (*(longlong *)*piVar8 != 0)) {
        fn_82BD9FD8();
      }
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
LAB_82bd5648:
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return iVar3 == 0;
}

