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
extern unsigned int *auStack_40;
extern int fn_828F0170();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_82F65AC0();
extern unsigned int uStack_3c;


undefined8 fn_82903A60(int *param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  ulonglong uVar6;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  
  puVar4 = *(undefined8 **)(*param_1 + 0x40);
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    uVar1 = *(undefined4 *)((int)puVar4 + 4);
    puVar5 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)0x0;
    do {
      iVar3 = fn_82F65AC0(uVar1,*(undefined4 *)((int)puVar4 + 4));
      if (iVar3 != 0) break;
      iVar3 = fn_828F0170(*(undefined4 *)puVar4,0,auStack_40);
      if (-1 < iVar3) {
        if (param_1[4] == uStack_3c) {
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = puVar4;
          }
        }
        else if (((param_1[4] & 0xffff0000U) == uStack_3c) && (puVar7 == (undefined8 *)0x0)) {
          puVar7 = puVar4;
        }
      }
      puVar4 = *(undefined8 **)(puVar4 + 5);
    } while (puVar4 != (undefined8 *)0x0);
    if ((puVar5 != (undefined8 *)0x0) || (puVar5 = puVar7, puVar7 != (undefined8 *)0x0)) {
      uVar2 = fn_82964588(param_1[2],*(undefined4 *)((int)puVar5 + 4),0xb51,1,4);
      if ((int)uVar2 == -1) {
        return 0xffffffff8007000e;
      }
      uVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        iVar3 = fn_82964628(*puVar5,param_1[2],uVar2,0,uVar6);
        if (iVar3 == -1) {
          return 0xffffffff8007000e;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < 4);
    }
  } while( true );
}

