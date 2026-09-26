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
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_822ACAD8();
extern unsigned int uStack_cc;


undefined8 fn_823818A0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 ***apppuStack_e0 [5];
  uint uStack_cc;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [188];
  
  fn_8223CFC0(auStack_c0,2,1);
  uVar1 = fn_82240158(auStack_c0,param_2);
  fn_82240158(uVar1,param_3);
  fn_822403C8(apppuStack_e0,auStack_bc);
  if (uStack_cc < 0x10) {
    apppuStack_e0[0] = apppuStack_e0;
  }
  uVar1 = fn_822ACAD8(*(undefined4 *)(*(int *)(param_1[4] * 4 + *param_1) + 0x48),
                            apppuStack_e0[0],param_4);
  fn_82230300(apppuStack_e0,1,0);
  fn_8223DCC8(auStack_c0);
  return uVar1;
}

