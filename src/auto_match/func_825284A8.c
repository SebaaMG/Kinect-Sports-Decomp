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
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82599808();


void fn_825284A8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar2 = fn_825279F8();
  if (iVar2 == 1) {
    fn_82528948(param_1);
  }
  if (iVar2 == 2) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
    puVar3 = (undefined4 *)fn_82599808();
    puVar6 = (undefined4 *)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x44);
    while (iVar2 != 0) {
      puVar6 = (undefined4 *)puVar6[1];
      iVar2 = puVar6[1];
    }
    puVar6[1] = puVar3;
    *puVar3 = *puVar6;
    if ((uVar4 & 0xffffffff) != 0) {
      puVar6 = (undefined4 *)puVar3[2];
      puVar5 = (undefined4 *)uVar4;
      if (puVar6 == (undefined4 *)0x0) {
        puVar3[2] = puVar5;
        *puVar5 = puVar3;
      }
      else {
        piVar7 = puVar6 + 1;
        iVar2 = *piVar7;
        while (iVar2 != 0) {
          puVar6 = (undefined4 *)*piVar7;
          piVar7 = puVar6 + 1;
          iVar2 = puVar6[1];
        }
        uVar1 = *puVar6;
        *piVar7 = (int)puVar5;
        *puVar5 = uVar1;
      }
    }
  }
  return;
}

