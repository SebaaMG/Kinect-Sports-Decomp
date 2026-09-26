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
extern int fn_82FF3568();
extern unsigned int iStack_38;
extern unsigned int uStack_34;
extern unsigned int uStack_40;


undefined8 fn_82FEF940(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uStack_40;
  int *piStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  if (((ulonglong)uVar1 != 0xfffffffffffffffc) &&
     ((*(uint *)(uVar1 + 0x14) & 0x3e000000) == 0x4000000)) {
    piVar6 = *(int **)(uVar1 + 0x18);
    if ((piVar6 == (int *)0x0) ||
       (iVar3 = (**(code **)(*piVar6 + 8))(piVar6,0xffffffff831bc7f4), iVar3 == 0)) {
      return 2;
    }
    uVar2 = *(undefined4 *)(uVar1 + 0x1c);
    *(int *)(param_1 + 300) = iVar3;
    *(undefined4 *)(param_1 + 0x128) = uVar2;
    fn_82FF3568(piVar6);
  }
  uVar5 = 0;
  piVar6 = (int *)(param_1 + 0xec);
  do {
    (**(code **)(**(int **)(param_1 + 0x68) + 0xe8))
              (*(int **)(param_1 + 0x68),uVar5,&uStack_40,*(undefined4 *)(param_1 + 0x70));
    if (((uStack_40 != 0xffffffff) &&
        (iVar3 = (**(code **)(*piStack_3c + 8))(piStack_3c,0xffffffff831bc7f4),
        piStack_3c != (int *)0x0)) && (iVar3 != 0)) {
      *piVar6 = iVar3;
      piVar6[1] = iStack_38;
      piVar6[-1] = uStack_40;
      *(undefined1 *)(piVar6 + 2) = uStack_34;
      fn_82FF3568(piStack_3c);
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 4;
  } while ((uVar5 & 0xffffffff) < 4);
  bVar4 = (**(code **)(**(int **)(param_1 + 0x68) + 0xec))
                    (*(int **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(byte *)(param_1 + 0xda) = bVar4 & 1 | *(byte *)(param_1 + 0xda) & 0xfe;
  return 1;
}

