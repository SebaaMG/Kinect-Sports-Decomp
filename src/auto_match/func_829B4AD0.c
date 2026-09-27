extern char *pcRam8315c260;
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
extern int fn_82980C18();
extern int fn_82980D00();


undefined8
fn_829B4AD0(undefined8 param_1,int param_2,int param_3,char param_4,char param_5,
             undefined4 *param_6)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;

  puVar9 = (undefined4 *)0x8315c260;
  bVar4 = false;
  *param_6 = 0;
  bVar3 = false;
  uVar8 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 3)) {
    for (; param_3 != 0; param_3 = *(int *)(param_3 + 0xc)) {
      uVar8 = uVar8 + 1;
    }
    if (pcRam8315c260 != (char *)0x0) {
      pcVar7 = pcRam8315c260;
      pcVar6 = *(char **)(param_2 + 0x18);
LAB_829b4b3c:
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
          if (cVar1 == cVar2) goto LAB_829b4b3c;
        }
        if (cVar1 == cVar2) {
          bVar3 = true;
          if (((uint)puVar9[2] <= uVar8) && (uVar8 <= (uint)puVar9[3])) break;
          bVar4 = true;
        }
        puVar9 = puVar9 + 6;
        pcVar7 = (char *)*puVar9;
        pcVar6 = *(char **)(param_2 + 0x18);
      } while (pcVar7 != (char *)0x0);
    }
    if (bVar3) {
      if (bVar4) {
        fn_82980D00(param_1,param_2 + 0x10,3000,0xffffffff820543e0,
                          *(undefined4 *)(param_2 + 0x18));
        return 0xffffffff80004005;
      }
      if (*(char *)(puVar9 + 4) == param_4) {
        *param_6 = puVar9;
        return 0;
      }
      uVar5 = 0xffffffff820543a4;
    }
    else {
      if (param_5 == '\0') {
        return 1;
      }
      uVar5 = 0xffffffff82054380;
    }
    fn_82980C18(param_1,param_2 + 0x10,3000,uVar5,*(undefined4 *)(param_2 + 0x18));
  }
  return 0xffffffff80004005;
}
