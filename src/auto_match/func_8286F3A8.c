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
extern unsigned int *auStack_110;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_828647C0();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_8287A7A8();
extern int fn_82FE9528();
extern unsigned int uStack_11c;


undefined8 fn_8286F3A8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 ******appppppuStack_130 [5];
  uint uStack_11c;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  puVar6 = *(undefined4 **)(param_1 + 0x14);
  while( true ) {
    if (puVar6 == *(undefined4 **)(param_1 + 0x18)) {
      return 0xffffffffa0100000;
    }
    uVar2 = fn_8287A7A8(*puVar6);
    cVar7 = fn_828647C0(uVar2,param_2);
    if (cVar7 != '\0') break;
    puVar6 = puVar6 + 1;
  }
  uVar1 = *puVar6;
  fn_828648B8(auStack_d0,param_2);
  fn_8223B688(appppppuStack_130,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  if (uStack_11c < 0x10) {
    appppppuStack_130[0] = appppppuStack_130;
  }
  uVar2 = fn_82FE9528(appppppuStack_130[0],0xffffffff8286ecf0,uVar1);
  if ((int)uVar2 == 1) {
    uVar2 = 0x20100000;
  }
  else {
    fn_828648B8(auStack_b0,param_2);
    uVar3 = fn_8223B688(auStack_90,auStack_b0);
    uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82021b44,0x1d);
    uVar3 = fn_8223DFF0(uVar3,0xffffffff82021b3c,4);
    fn_82240378(auStack_f0,uVar3);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_b0,1,0);
    uVar3 = fn_8223B688(auStack_50,auStack_f0);
    uVar4 = fn_82868378();
    fn_8286DA10(uVar4,uVar3,uVar2);
    fn_82865170();
    fn_82866418();
    fn_828648B8(auStack_110,param_2);
    fn_82865170();
    piVar5 = (int *)fn_828663F0();
    puVar6 = (undefined4 *)fn_8223B688(auStack_70,auStack_110);
    if (0xf < (uint)puVar6[5]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    (**(code **)(*piVar5 + 0xc))(piVar5,0xffffffff82021bb0,0x3bd,0xffffffff82021b64,puVar6);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_110,1,0);
    fn_82230300(auStack_f0,1,0);
    uVar2 = 0xffffffffa0100000;
  }
  fn_82230300(appppppuStack_130,1,0);
  return uVar2;
}

