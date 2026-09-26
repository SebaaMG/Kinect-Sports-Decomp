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
extern unsigned int *auStack_60;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_822ED920();
extern int fn_822EF458();
extern int fn_82F632D8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


undefined8 *
fn_822ED218(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,uint *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  int iStack_70;
  int iStack_6c;
  undefined1 *apuStack_68 [2];
  undefined1 auStack_60 [96];
  
  iStack_70 = 0;
  iVar1 = **(int **)(param_5 + 0x30);
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  iStack_6c = iVar1;
  fn_8223F508(iVar1);
  uVar2 = fn_822ED920(param_2,auStack_60,&stack0x00000020,&stack0x00000028,
                          *(undefined4 *)(param_5 + 0x14),&iStack_6c);
  uVar3 = fn_82F632D8(auStack_60,apuStack_68,uVar2,&iStack_70);
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)fn_8223F5A0(iVar1);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  cVar5 = fn_822EF458(&stack0x00000020,&stack0x00000028);
  if (cVar5 != '\0') {
    *param_6 = *param_6 | 1;
  }
  if ((apuStack_68[0] == auStack_60) || (iStack_70 != 0)) {
    *param_6 = *param_6 | 2;
  }
  else {
    *param_7 = uVar3;
  }
  *param_1 = uStack00000020;
  return param_1;
}

