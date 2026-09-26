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
extern unsigned int *auStack_78;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82537C48();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_80;


undefined4 *
fn_825382D8(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined1 auStack_78 [28];
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (param_2 != param_3) {
    puVar5 = param_2 + 5;
    do {
      if ((*(uint *)((int)puVar5 + -4) & 1) == 0) {
        uVar4 = *puVar5;
        uVar1 = *(undefined4 *)(puVar5 + -1);
        uVar2 = fn_82230110(auStack_a0,puVar5 + -4);
        uStack_80 = puVar5[-5];
        fn_82240378(auStack_78,uVar2);
        uStack_50 = 0;
        uStack_5c = uVar1;
        uStack_58 = uVar4;
        fn_82230300(uVar2,1,0);
        fn_82537C48(param_4 + 0x20,&uStack_80);
        fn_82230300(auStack_78,1,0);
      }
      puVar3 = puVar5 + 10;
      puVar5 = puVar5 + 0xf;
    } while (puVar3 != param_3);
  }
  *param_1 = (int)param_4;
  return param_1;
}

