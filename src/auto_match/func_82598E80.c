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
extern int fn_82522DF8();
extern int fn_825990F0();
extern int fn_825991A0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern int fn_82CE5420();
extern int fn_82CE5430();
extern int fn_82CE7310();
extern int fn_82CE7888();
extern unsigned int lbl_83296E18;


undefined8 fn_82598E80(int *param_1)

{
  int iVar1;
  int *piVar4;
  undefined8 uVar2;
  undefined4 *puVar5;
  undefined4 uVar6;
  longlong lVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 1) {
    if (iVar1 == 4) {
      fn_825991A0((double)(float)param_1[6],(double)(float)param_1[7],param_1[3],param_1[5]);
    }
    else if (iVar1 == 5) {
      iVar1 = param_1[1];
      piVar4 = (int *)fn_82599308();
      *piVar4 = *piVar4 - iVar1;
    }
    else {
      if (iVar1 == 6) {
        puVar5 = (undefined4 *)fn_82599308();
        *puVar5 = 0;
        lVar3 = fn_82599308();
        if (lVar3 != -8) {
          fn_82CE5430();
        }
        piVar4 = (int *)fn_82CE7310();
        iVar1 = *piVar4;
        lVar3 = fn_82599308();
        (**(code **)(iVar1 + 0xc))(piVar4,lVar3 + 8,0xffffffff821c7b20,3);
        lVar3 = fn_82599308();
        fn_82CE7888(lVar3 + 8);
        puVar5 = (undefined4 *)fn_82522DF8(0x40);
        *puVar5 = 5;
        fn_82A1BB18();
        uVar6 = fn_8259A230();
        puVar5[2] = 0;
      }
      else {
        if (iVar1 == 7) {
          fn_825990F0();
        }
        else {
          if (iVar1 != 8) {
            return 0;
          }
          piVar4 = (int *)fn_82CE7310();
          iVar1 = *piVar4;
          uVar2 = fn_82CE5420();
          (**(code **)(iVar1 + 0xc))(piVar4,uVar2,0xffffffff821c7b20,3);
          fn_82CE5420();
          fn_82CE7888();
        }
        puVar5 = (undefined4 *)fn_82522DF8(0x40);
        *puVar5 = 5;
        fn_82A1BB18();
        uVar6 = fn_8259A230();
        puVar5[2] = 0;
      }
      puVar5[1] = uVar6;
      sync(1);
      fn_82BFE128((&lbl_83296E18)[puVar5[2]],puVar5);
    }
  }
  return 1;
}

