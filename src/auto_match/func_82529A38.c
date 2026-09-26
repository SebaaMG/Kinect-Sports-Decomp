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
extern int fn_82522ED8();
extern int fn_82529830();
extern int fn_82529BF0();
extern int fn_82587B68();
extern int fn_82594A70();
extern int fn_8288B760();
extern int iRam8326af38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_82529A38(undefined8 param_1,ushort *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  
  if ((int)param_1 != 0) {
    iVar1 = fn_82587B68(param_1);
    puVar2 = (undefined4 *)(**(code **)(iVar1 + 8))();
    uStack_3c = 0;
    uStack_40 = 0;
    (*(code *)*puVar2)(&uStack_40);
    if ((*param_2 == uStack_3c) &&
       (puVar3 = (undefined4 *)fn_82529830(param_1), puVar3 != (undefined4 *)0x0)) {
      *puVar3 = puVar2;
      puVar3[1] = (int)param_1;
      puVar3[3] = 0;
      if (*(int *)(param_2 + 0x44) == 0) {
        puVar3[7] = 0;
      }
      else {
        if (((*(uint *)(param_2 + 0x4a) & 0x2000000) == 0) ||
           (uVar5 = 1, *(int *)(param_2 + 0x46) != 0)) {
          uVar5 = 0;
        }
        puVar3[7] = uVar5;
      }
      if (param_3 == (int *)0x0) {
        if (*(int *)(param_2 + 0x48) == 0) {
          puVar3[9] = 1;
        }
        else {
          puVar3[9] = 0;
        }
      }
      else {
        puVar3[7] = 1;
        uVar4 = fn_8288B760(param_3);
        puVar3[9] = uVar4 & 0xff;
      }
      iVar1 = fn_82529BF0(puVar3,param_1,param_2,1);
      if (iVar1 != 0) {
        if (param_3 != (int *)0x0) {
          puVar3[7] = 1;
          (**(code **)(*param_3 + 0x5c))(param_3,1);
          param_3[0x20] = (int)puVar3;
          (**(code **)(*param_3 + 0x5c))(param_3,0);
          puVar3[8] = param_3;
          puVar3[7] = 1;
          (**(code **)(*param_3 + 0x48))(param_3);
        }
        if (puVar3[7] != 0) {
          fn_82594A70(puVar3,*(undefined4 *)(param_2 + 0x42));
        }
        iRam8326af38 = iRam8326af38 + 1;
        return puVar3;
      }
      fn_82522ED8(puVar3);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}

