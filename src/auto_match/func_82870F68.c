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
extern unsigned int *auStack_80;
extern char cRam832116e3;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82869F18();
extern int fn_82F63CA0();


undefined8 fn_82870F68(int *param_1)

{
  int iVar1;
  int *piVar3;
  char cVar4;
  undefined8 uVar2;
  int *piVar5;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  piVar5 = (int *)*param_1;
  param_1[4] = 0;
  piVar3 = (int *)fn_82865170();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x18))();
  cVar4 = (**(code **)(*piVar3 + 0x24))();
  if (piVar5 != (int *)param_1[1]) {
    do {
      piVar3 = (int *)*piVar5;
      if ((*(char *)((int)piVar3 + 0x45) == '\x01') && (cVar4 != '\0')) {
        fn_82F63CA0(piVar5,piVar5 + 1,(param_1[1] - (int)(piVar5 + 1) >> 2) << 2);
        param_1[1] = param_1[1] + -4;
        if (cRam832116e3 != '\0') {
          fn_828648B8(auStack_80,piVar3 + 6);
          fn_8223B688(auStack_60,auStack_80);
          fn_82230300(auStack_80,1,0);
          fn_82230300(auStack_60,1,0);
        }
        (**(code **)(*piVar3 + 0x20))(piVar3,1);
        param_1[4] = param_1[4] + 1;
      }
      else {
        if (*(char *)((int)piVar3 + 0x3d) != '\0') {
          iVar1 = *piVar3;
          uVar2 = fn_82869F18();
          (**(code **)(iVar1 + 0x24))(piVar3,uVar2);
        }
        piVar5 = piVar5 + 1;
      }
    } while (piVar5 != (int *)param_1[1]);
  }
  return 0x201f0000;
}

