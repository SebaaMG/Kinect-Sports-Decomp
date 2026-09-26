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
extern unsigned int *auStack_50;
extern int fn_8267BE38();
extern int fn_826A8E58();
extern int fn_82766D88();
extern int fn_827673B0();
extern int fn_82768DE0();
extern int fn_8276AB50();
extern int fn_8276B860();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_8276BA20(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int *piVar7;
  uint uVar8;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puVar2 = (undefined8 *)fn_82768DE0(auStack_50,param_2 + 0x2c);
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  uStack_58 = 0;
  uStack_60 = *puVar2;
  uVar4 = 0;
  uVar6 = 0;
  uVar8 = 0;
  bVar1 = false;
  cVar3 = fn_826A8E58(&uStack_60,&uStack_58);
  if (cVar3 == '\0') {
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_58 = 0;
    piVar7 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
    do {
      if (bVar1) {
        uVar5 = (uint)*(ushort *)((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) * 8 + *piVar7 + 0xc);
        if (uVar8 == uVar5 - 1) goto LAB_8276bac0;
        uStack_68 = (undefined2)uVar4;
        uStack_66 = (undefined2)uVar8;
        fn_8276AB50(&uStack_48,&uStack_68);
        bVar1 = false;
      }
      else {
        bVar1 = true;
        uVar4 = (uint)*(ushort *)((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) * 8 + *piVar7 + 0xc);
        uVar5 = uVar4;
LAB_8276bac0:
        uVar8 = uVar5;
        fn_82766D88(&uStack_60);
        piVar7 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
      }
      uVar6 = (undefined2)uVar4;
      cVar3 = fn_826A8E58(&uStack_60,&uStack_58);
    } while (cVar3 == '\0');
  }
  if (bVar1) {
    uStack_66 = (undefined2)uVar8;
    uStack_68 = uVar6;
    fn_8276AB50(&uStack_48,&uStack_68);
  }
  fn_827673B0(&uStack_48,0,uStack_44,0);
  fn_8276B860(param_1,&uStack_48);
  fn_8267BE38(uStack_48);
  return param_1;
}

