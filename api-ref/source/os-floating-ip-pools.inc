.. -*- rst -*-

==========================================
 Floating IP pools (os-floating-ip-pools)
==========================================

Manages groups of floating IPs.

List Floating Ip Pools
======================

.. rest_method:: GET /v2.1/{tenant_id}/os-floating-ip-pools

Lists floating IP pools.

Policy defaults enable only users with the administrative role or user 
who is authorized to operate on tenant <tenant_id> to perform this 
operation. Cloud providers can change these permissions through the 
``policy.json`` file.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403)

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id

Response
--------

.. rest_parameters:: parameters.yaml

  - floating_ip_pools: floating_ip_pools
  - name: floating_ip_pool_name 

**Example List Floating Ip Pools: JSON response**

.. literalinclude:: ../../doc/api_samples/os-floating-ip-pools/floatingippools-list-resp.json
   :language: javascript

