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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82F63108();
extern unsigned int iStack_38;
extern unsigned int uStack_40;


undefined4 * fn_823BC978(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  int iStack_38;
  
  while (param_2 != param_3) {
    uStack_40 = param_2[3];
    fn_82365BD8(auStack_3c,param_2 + 4);
    piVar2 = (int *)param_4[4];
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    cVar3 = (**(code **)(*piVar2 + 4))(piVar2,&uStack_40);
    if (iStack_38 != 0) {
      fn_822315A0(iStack_38);
    }
    if (cVar3 != '\0') break;
    if (*(char *)((int)param_2 + 0x19) == '\0') {
      puVar1 = (undefined4 *)param_2[2];
      if (*(char *)((int)puVar1 + 0x19) == '\0') {
        puVar4 = (undefined4 *)*puVar1;
        param_2 = puVar1;
        while (puVar1 = puVar4, *(char *)((int)puVar1 + 0x19) == '\0') {
          param_2 = puVar1;
          puVar4 = (undefined4 *)*puVar1;
        }
      }
      else {
        puVar1 = (undefined4 *)param_2[1];
        puVar4 = param_2;
        while ((param_2 = puVar1, *(char *)((int)param_2 + 0x19) == '\0' &&
               (puVar4 == (undefined4 *)param_2[2]))) {
          puVar4 = param_2;
          puVar1 = (undefined4 *)param_2[1];
        }
      }
    }
  }
  piVar2 = (int *)param_4[4];
  *param_1 = param_2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,param_4 != piVar2);
    param_4[4] = 0;
  }
  return param_1;
}

